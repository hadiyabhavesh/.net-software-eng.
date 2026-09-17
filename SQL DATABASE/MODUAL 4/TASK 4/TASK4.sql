create database TASK4;
USE TASK4;
create table playlist( id int primary key auto_increment,song_name varchar(50),artist varchar(50),genre varchar(50),play_count int);
insert into playlist(song_name,artist,genre,play_count) value 
('Shape of You', 'Ed Sheeran', 'Pop', 150),
('Blinding Lights', 'The Weeknd', 'Pop', 200),
('Gods Plan', 'Drake', 'Hip-Hop', 180),
('HUMBLE.', 'Kendrick Lamar', 'Hip-Hop', 120),
('Perfect', 'Ed Sheeran', 'Pop', 90);
select song_name,artist as singer from playlist;
select * from playlist where genre='pop' and play_count>100 order by play_count desc;
select count(*)as hiphop_songs from playlist where genre='hip-hop';
select genre, sum(play_count) as total_plays from playlist group by genre; 