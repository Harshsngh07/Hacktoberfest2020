const createCat = require("./catFactory");

const pavlov = createCat('Pavlov');

pavlov.speak();
pavlov.bathe();

if (isNapTime()) {
	pavlov
		.nap()
		.then(data => console.log(data))
		.catch(err => console.error(err))
}

function isNapTime() {
	const now = new Date(),
		currentHour = now.getHours();

	return currentHour < 7 || (currentHour > 8 && currentHour < 13) || currentHour > 14;
}
