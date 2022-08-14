# Write your MySQL query statement below

# select score,dense_rank() over (order by score desc) as 'Rank' from Scores;

select s1.score, count(s2.score) as 'Rank' from Scores s1, (select distinct score from Scores) s2
where s1.score<=s2.score group by id order by score desc;