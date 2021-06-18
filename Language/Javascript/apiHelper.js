export class Backend {
  constructor() {
    this.baseUrl = '';
  }

  setBaseUrl(baseUrl) {
    this.baseUrl = baseUrl;
  }

  getBaseUrl() {
    return this.baseUrl;
  }

  get(endpoint) {
    return fetch(this.baseUrl + endpoint).then((response) => response.json());
  }

  post(endpoint, data = {}) {
    return fetch(this.baseUrl + endpoint, {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',
      },
      body: JSON.stringify(data),
    }).then((response) => response.json());
  }
}

// Example how to use it

// importing from another file
import { Backend } from './backend.js';

const getAmsterdamWeather = () => {
  // create a new instance of Backend and set the base url
  const api = new Backend();
  api.setBaseUrl('https://api.learnjavascript.online/demo');
  // /weather/amsterdam.json
  api.get('/weather/amsterdam.json').then((data) => {
    console.log(data.temperature);
    showTemperature(data.temperature);
  });
};

function showTemperature(temperature) {
  //do not change this function
  console.log(temperature);
}

//sample usage
getAmsterdamWeather();
