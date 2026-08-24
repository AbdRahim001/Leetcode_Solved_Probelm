# Write your MySQL query statement below
SELECT P.project_id                      AS project_id,
       Round(Avg(E.experience_years), 2) AS average_years
FROM   project AS P
       JOIN employee AS E
         ON P.employee_id = E.employee_id
GROUP  BY P.project_id; 