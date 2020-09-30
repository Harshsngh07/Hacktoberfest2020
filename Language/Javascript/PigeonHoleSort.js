/*Pigeonhole sorting is a sorting algorithm that is suitable for sorting lists of elements 
 where the number of elements and the length of the range of possible key values are approximately the same.
 It requires O(n + N) time. */
function pigeonholeSort(unsortedArray) {
	if (!Array.isArray(unsortedArray)) {
		throw new Error(`pigeonholeSort() expects an array! Found ${typeof unsortedArray}.`);
	}

	const pigeonhole = [];

	unsortedArray.forEach((number) => {
		if (isNaN(number)) {
			throw new Error(`pigeonholeSort() expects an array of numbers! Found ${typeof number}.`);
		}
		// Add each number to its respective pigeonhole
		if (pigeonhole[number]) pigeonhole[number].push(number);
		else pigeonhole[number] = [ number ];
	});

	// Use reduce to flatten an array of arrays!
	return pigeonhole.reduce((a, b) => a.concat(b), []);
}
const unsortedArray = [ 721, 4, 117, 13, 10, 880, 4, 117, 88 ];
const sortedArray = pigeonholeSort(unsortedArray);
console.log('Sorted Array:');
console.log(sortedArray);
