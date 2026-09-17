create database task10;
use task10;
CREATE TABLE users (user_id INT PRIMARY KEY,username VARCHAR(50));
CREATE TABLE playlists (playlist_id INT PRIMARY KEY,user_id INT,name VARCHAR(100),created_at DATETIME,FOREIGN KEY (user_id) REFERENCES users(user_id));
INSERT INTO users (user_id, username)VALUES(101, 'user101'),(102, 'user102');
INSERT INTO playlists (playlist_id, user_id, name, created_at)VALUES(1, 101, 'Workout Mix', '2026-09-05 10:30:00'),
(2, 102, 'Chill Vibes', '2026-09-10 18:00:00'),(3, 101, 'Top Hits', '2026-09-15 12:00:00');
UPDATE playlists SET name = 'Evening Chill' WHERE name = 'Chill Vibes' AND user_id = 102;
select * from playlists;
DELETE FROM playlists WHERE name = 'Workout Mix' AND user_id = 101;

DELIMITER //
CREATE PROCEDURE GetMonthlyPlaylistCount(IN p_user_id INT,IN p_month INT)
BEGIN SELECT COUNT(*) AS total_playlists FROM playlists WHERE user_id = p_user_id AND MONTH(created_at) = p_month;END //
DELIMITER ;
CALL GetMonthlyPlaylistCount(101, 9);