# Write your MySQL query statement below
SELECT DISTINCT( email )
FROM   person
WHERE  email IN (SELECT email
                 FROM   person
                 GROUP  BY email
                 HAVING Count(*) > 1); 