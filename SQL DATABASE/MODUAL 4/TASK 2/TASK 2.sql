create database TASK2;
USE TASK2;
create table restaurants(id int primary key auto_increment, name varchar(100),location varchar(100),rating decimal(2,1));
alter table restaurants add column  average_cost int;
select * from restaurants; 
drop table restaurants; 
create table playlists(playlist_id INT primary key auto_increment,title VARCHAR(50), created_by VARCHAR(50),created_at DATE);
select * from playlists;
USE TASK2;
