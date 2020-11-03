const request = require('request');

function createCat(name = 'The Unnamed Cat') {
	const uname = name.replace("\s+", '-');
	const SECRET_DOC_REPO = `https://the-happy-cat.meow/api/v2/docs?user=${uname}`
	const groomingSpots = [
		'face',
		'top-of-head',
		'chest',
		'left-front-leg',
		'left-front-paw',
		'right-front-leg',
		'right-front-paw',
		'left-rear-leg',
		'left-rear-paw',
		'right-rear-leg',
		'right-rear-paw',
		'left-side',
		'right-side',
		'back',
		'trail'
	];

	function speak() {
		console.log('Meow!');
	}

	function bathe() {
		groomingSpots.forEach(spot => {
			console.log(`Cleaning ${spot}... Mmlem...`);
		});
	}

	function plotWorldDomination() {
		return new Promise((resolve, reject) => {
			request.get(SECRET_DOC_REPO, {json: true}, (err, res, body) => {
				if (!err && res.statusCode === 200) {
					resolve(body);
				} else {
					reject(err);
				}
			});
		});
	}

	return {
		name,
		speak,
		nap: plotWorldDomination,
		bathe
	}
}

module.exports = createCat;
