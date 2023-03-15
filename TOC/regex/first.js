const regex = /^([a-zA-Z_$][a-zA-Z\\d_$]*)$/; // c identifier
console.log(regex.test('hi'));
console.log(regex.test('1hi'))
console.log(regex.test('hi1'));
console.log(regex.exec('hi'));
console.log(regex.exec('hi_name'));
console.log(regex.exec('1hi_name'));


// regex for email validation
console.log("For email");
const emailRegex = /^[(\w\d\W)+]+@[\w+]+\.[\w+]+$/;
console.log(emailRegex.test('binamra@gmail.com'));
console.log(emailRegex.test('binamragmail.com'));
console.log(emailRegex.test('binamra@gmailcom'));


console.log("For phone number validation");
const phoneRegex = /^\+?[1-9][0-9]{9,12}$/;
console.log(phoneRegex.test('9869327496'));
console.log(phoneRegex.test('986a9327496'));
console.log(phoneRegex.test('986327496'));
console.log(phoneRegex.test('98632749699'));


console.log('9862123123123'.match(phoneRegex));
