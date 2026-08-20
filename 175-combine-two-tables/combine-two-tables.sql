# Write your MySQL query statement below
SELECT P.firstname AS firstName,
       P.lastname  AS lastName,
       A.city      AS city,
       A.state     AS state
FROM   person AS P
       LEFT JOIN address AS A
              ON P.personid = A.personid; 