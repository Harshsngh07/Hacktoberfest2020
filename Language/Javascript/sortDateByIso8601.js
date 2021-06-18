const myArray = [
  { name: 'oldest', date: '2007-01-17T08:00:00Z' },
  { name: 'newest', date: '2011-01-28T08:00:00Z' },
  { name: 'old', date: '2009-11-25T08:00:00Z' },
];

myArray.sort((a, b) => {
  return a.date < b.date ? -1 : a.date > b.date ? 1 : 0;
});
