-- Write your PostgreSQL query statement below
SELECT score,
       Dense_rank()
         OVER (
           ORDER BY score DESC) AS rank
FROM   scores; 