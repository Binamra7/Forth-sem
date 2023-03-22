const string = 'A quick brown fox jumps over the lazy dog';
const search = 'fox';

if(string.match(search)) {
  console.log('The string contains the word ' + search);
} else {
  console.log('The string does not contain the word ' + search);
}
