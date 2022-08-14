# Write your MySQL query statement below

select distinct l1.num as 'ConsecutiveNums' from Logs as l1 INNER JOIN Logs as l2 on l1.id+1=l2.id INNER JOIN Logs as l3 on l2.id+1=l3.id where 1=1 and l1.num=l2.num and l2.num=l3.num;