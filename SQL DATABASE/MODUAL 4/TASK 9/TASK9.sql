create database task8;
use task8;
CREATE TABLE Orders (order_id INT PRIMARY KEY,user_id INT,order_total DECIMAL(10,2));
INSERT INTO Orders VALUES(1, 101, 1500.00);
START TRANSACTION;
INSERT INTO Orders VALUES(2, 102, 2500.00);
COMMIT;
SELECT * FROM Orders;

CREATE TABLE OrderItems (item_id INT PRIMARY KEY,order_id INT,item_name VARCHAR(50),quantity INT);
INSERT INTO OrderItems VALUES(1, 1, 'Pizza', 1);
START TRANSACTION;
INSERT INTO OrderItems VALUES(2, 1, 'Burger', 2);
INSERT INTO OrderItems VALUES(3, 1, 'Coke', 1);
ROLLBACK;
SELECT * FROM OrderItems;


CREATE TABLE Cart (cart_id INT PRIMARY KEY,user_id INT,product_name VARCHAR(50));
START TRANSACTION;
INSERT INTO Cart VALUES(1, 101, 'Mobile');
SAVEPOINT product_added;
INSERT INTO Cart VALUES(2, 101, 'Headphones');
ROLLBACK TO SAVEPOINT product_added;
COMMIT;
SELECT * FROM Cart;

CREATE TABLE Wallet (user_id INT PRIMARY KEY,balance DECIMAL(10,2));
CREATE TABLE WalletTransaction (transaction_id INT PRIMARY KEY,user_id INT,purchase_amount DECIMAL(10,2));
INSERT INTO Wallet VALUES(101, 5000.00);
DELIMITER //
CREATE TRIGGER deduct_wallet_balance
AFTER INSERT ON WalletTransaction
FOR EACH ROW
BEGIN
UPDATE Wallet
SET balance = balance - NEW.purchase_amount
WHERE user_id = NEW.user_id;END //
DELIMITER ;
INSERT INTO WalletTransaction VALUES (1, 101, 1500.00);
SELECT * FROM Wallet;