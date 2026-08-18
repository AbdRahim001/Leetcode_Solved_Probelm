/* Write your T-SQL query statement below */
select  d.name as Department, 
        e1.name as Employee, 
        e1.salary as Salary 
from Employee as e1 
join Department as d 
on e1.departmentID = d.id 
where e1.salary = (
    select max(e2.salary)
    from Employee as e2
    where e2.departmentID = e1.departmentID
);