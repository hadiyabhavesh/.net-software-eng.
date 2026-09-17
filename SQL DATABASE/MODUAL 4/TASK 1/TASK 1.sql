create database InstaClone;
USE InstaClone;
create table users(user_id int primary key, username varchar(30),email varchar(50), followers_count int);
select * from users;
insert into users (user_id,username,email, followers_count) value (1,'bhavesh','bhavesh@gamil.com',867),
(2,'mamta','mamta@gamil.com',945),(3,'daya','daya@gamil.com',856);
create table post(post_id int primary key,user_id int,caption varchar(50),post_date date, foreign key (user_id) references users(user_id));
select * from users;
show databases;
use Instaclone;
select * from users;
select * from post;