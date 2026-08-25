-- Write your PostgreSQL query statement below
SELECT class
FROM   courses
GROUP  BY class
HAVING Count(class) >= 5; 