// This function takes in two objects and compares the objects, even if there
// are nested objects within the objects. Returns a boolean value.

function deepEqual(obj1, obj2) {
  if (typeof obj1 == 'object' && obj1 != null) {
    if (Object.keys(obj1).length == Object.keys(obj2).length) {
      for (let i = 0; i < Object.keys(obj1).length; i++) {
        if (Object.keys(obj1)[i] === Object.keys(obj2)[i]) {
          if (
            deepEqual(obj1[Object.keys(obj1)[i]], obj2[Object.keys(obj2)[i]])
          ) {
            return true;
          } else {
            return false;
          }
        } else {
          return false;
        }
      }
    } else {
      return false;
    }
  } else {
    return obj1 === obj2;
  }
}

// Tests
let obj = { here: { is: 'an' }, object: 2 };
console.log(deepEqual(obj, obj));
// → true
console.log(deepEqual(obj, { here: 1, object: 2 }));
// → false
console.log(deepEqual(obj, { here: { is: 'an' }, object: 2 }));
// → true
