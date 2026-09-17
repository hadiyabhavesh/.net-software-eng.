create database task5;
use task5;
create table influencers (influencer_id int PRIMARY KEY,name varchar(50));
create table posts(post_id int PRIMARY KEY,influencer_id int,caption varchar(50),foreign key (influencer_id) references influencers(influencer_id));
insert into influencers(influencer_id,name) value (1, 'Virat Kohli'),(2, 'CarryMinati'),(3, 'MrBeast'),
(4, 'Rahul');
insert into posts(post_id,influencer_id,caption) value (101, 1, 'Fitness and cricket'),(102, 1, 'Match day'),(103, 2, 'New video uploaded'),
(104, 2, 'Gaming time'),(105, 3, 'New challenge'),(106, 3, 'Giving away prizes');
select posts.caption as caption,influencers.name as name from posts inner join influencers 
on posts.influencer_id=influencers.influencer_id;
SELECT influencers.name,COALESCE(posts.caption, 'No Posts') AS caption FROM influencers LEFT JOIN posts 
ON influencers.influencer_id = posts.influencer_id;
select posts.caption as caption,influencers.name as name from posts right join influencers 
on posts.influencer_id=influencers.influencer_id;
