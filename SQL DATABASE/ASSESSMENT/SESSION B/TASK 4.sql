create database ASS_TASK4;
USE ASS_TASK4;
CREATE TABLE customers (customer_id INT PRIMARY KEY,customer_name VARCHAR(50),wallet_balance DECIMAL(10,2));
CREATE TABLE orders (order_id INT PRIMARY KEY AUTO_INCREMENT,customer_id INT,restaurant_id INT,amount DECIMAL(10,2),
order_date DATETIME DEFAULT CURRENT_TIMESTAMP,FOREIGN KEY (customer_id) REFERENCES customers(customer_id));
INSERT INTO customers VALUES (1, 'Bhavesh', 5000.00);
DELIMITER //
CREATE PROCEDURE place_order(IN p_customer_id INT,IN p_restaurant_id INT,IN p_amount DECIMAL(10,2))
BEGIN
    DECLARE wallet DECIMAL(10,2);
    START TRANSACTION;
    SELECT wallet_balance
    INTO wallet
    FROM customers
    WHERE customer_id = p_customer_id
    FOR UPDATE;
    IF wallet >= p_amount THEN
        UPDATE customers
        SET wallet_balance = wallet_balance - p_amount
        WHERE customer_id = p_customer_id;
        INSERT INTO orders(customer_id, restaurant_id, amount)
        VALUES(p_customer_id, p_restaurant_id, p_amount);
        COMMIT;
        SELECT 'Order placed successfully' AS message;
    ELSE
        ROLLBACK;
        SELECT 'Insufficient wallet balance - Order cancelled' AS message;
    END IF;
END //
DELIMITER ;
CALL place_order(1, 101, 1500.00);
CALL place_order(1, 101, 4000.00);
