# Write your MySQL query statement below

select e2.name as "Employee" from Employee as e1 INNER JOIN Employee as e2 ON e1.id=e2.managerId where e1.salary<e2.salary;