# Write your MySQL query statement below
SELECT E.name  AS name,
       B.bonus AS bonus
FROM   employee AS E
       LEFT JOIN bonus AS B
              ON E.empid = B.empid
WHERE  B.bonus < 1000
        OR B.bonus IS NULL; 