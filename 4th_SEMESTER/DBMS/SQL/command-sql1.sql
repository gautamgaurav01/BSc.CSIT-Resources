--Select table
SELECT * FROM students;



--Create a new table
CREATE TABLE students (
    student_id INT AUTO_INCREMENT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    age INT,
    email VARCHAR(100),
    course VARCHAR(50),
    admission_date DATE
);



--Select specific columns
SELECT first_name, last_name, course FROM students;



--Select unique values
SELECT DISTINCT course FROM students;



--Sort data in ascending order
SELECT * FROM students ORDER BY age ASC;



--Sort data in descending order
SELECT * FROM students ORDER BY age DESC;



--Select data with condition
SELECT * FROM students WHERE age > 20;



--Select data using BETWEEN
SELECT * FROM students WHERE age BETWEEN 20 AND 22;



--Select data using IN
SELECT * FROM students WHERE course IN ('BSc CSIT', 'BCA');



--Search data using LIKE
SELECT * FROM students WHERE first_name LIKE 'G%';



--Insert value into table
INSERT INTO students (
    first_name,
    last_name,
    age,
    email,
    course,
    admission_date
)
VALUES
('Gaurav', 'Gautam', 21, 'gaurav@example.com', 'BSc CSIT', '2024-01-15');



--Update value in table
UPDATE students SET age = 22 WHERE student_id = 1;



--Update multiple columns
UPDATE students SET age = 23, course = 'BCA' WHERE student_id = 2;



--Delete value from table
DELETE FROM students WHERE student_id = 5;



--Delete all rows while keeping table structure
TRUNCATE TABLE students;



--Delete entire table
DROP TABLE students;



--Add a new column
ALTER TABLE students ADD phone VARCHAR(15);



--Modify column datatype
ALTER TABLE students MODIFY age INT;



--Rename a column
ALTER TABLE students RENAME COLUMN phone TO mobile_number;



--Delete a column
ALTER TABLE students DROP COLUMN mobile_number;



--Count total records
SELECT COUNT(*) FROM students;



--Find maximum age
SELECT MAX(age) FROM students;



--Find minimum age
SELECT MIN(age) FROM students;



--Find average age
SELECT AVG(age) FROM students;



--Find total age
SELECT SUM(age) FROM students;



--Group records
SELECT course, COUNT(*) AS total_students FROM students GROUP BY course;



--Filter grouped records
SELECT course, COUNT(*) AS total_students FROM students GROUP BY course HAVING COUNT(*) > 1;



--Limit number of records
SELECT * FROM students LIMIT 5;



--Display table structure
DESC students;



