SELECT * FROM employees;
SELECT lastname,firstname,jobtitle FROM employees;
SELECT firstname,lastname,email FROM employees WHERE jobtitle="president";
SELECT DISTINCT jobTitle FROM employees;
SELECT firstname,lastname, jobtitle FROM employees ORDER BY firstname ASC,jobtitle DESC;
SELECT DISTINCT city, state FROM customers;
SELECT firstname,lastname FROM employees LIMIT 5;
SELECT firstname,lastname FROM employees LIMIT 1,5;
SELECT officeCode, city, phone FROM offices WHERE country IN ('USA','France');
SELECT officeCode, city, phone FROM offices WHERE country IN ('USA','France');
SELECT orderNumber FROM orderDetails GROUP BY orderNumber HAVING SUM(quantityOrdered * priceEach) > 60000;
SELECT orderNumber,customerNumber,status,shippedDate FROM orders WHERE orderNumber IN ( SELECT orderNumber FROM orderDetails GROUP BY orderNumber HAVING SUM(quantityOrdered * priceEach) > 60000);
SELECT employeeNumber, lastName, firstName
FROM employees
WHERE firstName LIKE 'a%'
14. SELECT employeeNumber, lastName, firstName
FROM employees
WHERE lastName LIKE '%on'
15. SELECT employeeNumber, lastName, firstName
FROM employees
WHERE lastName NOT LIKE 'B%'
16. SELECT customerNumber id, contactLastname name
FROM customers
UNION
SELECT employeeNumber id,firstname name
FROM employees
17. (SELECT customerNumber id,contactLastname name
FROM customers)
UNION
(SELECT employeeNumber id,firstname name
FROM employees)
ORDER BY name,id
18. (SELECT customerNumber, contactLastname
FROM customers)
UNION
(SELECT employeeNumber, firstname
FROM employees)
ORDER BY contactLastname, customerNumber
19. SELECT A.productCode, A.productName, B.orderNumber
FROM products A
INNER JOIN orderDetails B on A.productCode = B.productCode;
20. SELECT c.customerNumber, customerName,orderNUmber, o.status
FROM customers c
LEFT JOIN orders o ON c.customerNumber = o.customerNumber;