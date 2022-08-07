# Write your MySQL query statement below

select t2.id from Weather as t1 INNER JOIN Weather as t2 on t2.recordDate = DATE_ADD(t1.recordDate, INTERVAL 1 DAY) and t2.temperature>t1.temperature;