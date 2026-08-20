-- Write your PostgreSQL query statement below
SELECT P.product_name AS product_name,
       S.year         AS year,
       S.price        AS price
FROM   sales AS S
       JOIN product AS P
       ON P.product_id = S.product_id; 