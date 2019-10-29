var x = [1, 1, 1, 1,1,1,1,1,1,1, 2, 2, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6];
var mostOccuredFrequency = -1;
var mostOccuredItem = -1;
var mostOccureObject = {};
x.forEach(function (item) {
    if (mostOccureObject[item] == undefined)
        mostOccureObject[item] = 1;
    else
        mostOccureObject[item] = mostOccureObject[item] + 1;
    if (mostOccuredFrequency < mostOccureObject[item]){
        mostOccuredFrequency = mostOccureObject[item];
        mostOccuredItem=item;
    }
});
console.log(mostOccuredItem);