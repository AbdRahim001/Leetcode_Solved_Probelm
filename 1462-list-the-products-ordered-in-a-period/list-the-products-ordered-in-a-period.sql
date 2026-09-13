# Write your MySQL query statement below
SELECT p.product_name AS product_name,
       Sum(o.unit)    AS unit
FROM   products AS p
       JOIN orders AS o
         ON p.product_id = o.product_id
WHERE  order_date BETWEEN '2020-02-01' AND '2020-02-29'
GROUP  BY p.product_id,
          p.product_name
HAVING Sum(o.unit) >= 100; 