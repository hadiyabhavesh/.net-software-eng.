create database task8;
use task8;
DELIMITER //
CREATE PROCEDURE user_details()
BEGIN
    DECLARE user_name VARCHAR(50);
    DECLARE user_age INT;
    SET user_name = 'Hadiya';
    SET user_age = 21;
    SELECT user_name AS Name, user_age AS Age;
END //
DELIMITER ;
CALL user_details();

DELIMITER //
CREATE PROCEDURE check_delivery()
BEGIN
    DECLARE order_amount DECIMAL(10,2);
    SET order_amount = 600;
    IF order_amount > 500 THEN
	SELECT 'Eligible for free delivery' AS Message;
    ELSE
	SELECT 'Delivery charges apply' AS Message;
    END IF;
END //
DELIMITER ;
CALL check_delivery();

DELIMITER //
CREATE PROCEDURE print_numbers()
BEGIN
    DECLARE counter INT DEFAULT 1;
    number_loop: LOOP
        SELECT counter;
        SET counter = counter + 1;
        IF counter > 5 THEN
		LEAVE number_loop;
        END IF;
    END LOOP number_loop;
END //
DELIMITER ;
CALL print_numbers();

CREATE TABLE PRODUCTS (PRODUCT_ID INT PRIMARY KEY,PRODUCT_NAME VARCHAR(50));
INSERT INTO PRODUCTS VALUES(1, 'Pizza'),(2, 'Burger'),(3, 'Pasta'),(4, 'Sandwich');
DELIMITER //
CREATE PROCEDURE show_products()
BEGIN
    DECLARE done INT DEFAULT 0;
    DECLARE p_name VARCHAR(50);
    DECLARE product_cursor CURSOR FOR
	SELECT PRODUCT_NAME FROM PRODUCTS;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;
    OPEN product_cursor;
    product_loop: LOOP
        FETCH product_cursor INTO p_name;
        IF done = 1 THEN
		LEAVE product_loop;
        END IF;
        SELECT p_name AS Product_Name;
    END LOOP;
    CLOSE product_cursor;
END //
DELIMITER ;
CALL show_products();

DELIMITER //
CREATE PROCEDURE divide_numbers()
BEGIN
    DECLARE num1 DECIMAL(10,2);
    DECLARE num2 DECIMAL(10,2);
    DECLARE result DECIMAL(10,2);
    DECLARE CONTINUE HANDLER FOR SQLSTATE '22012'
        SELECT 'Cannot divide by zero' AS Message;
    SET num1 = 100;
    SET num2 = 0;
    SET result = num1 / num2;
    SELECT result AS Result;
END //
DELIMITER ;
CALL divide_numbers();


DELIMITER //
CREATE PROCEDURE divide_numbers()
BEGIN
    DECLARE num1 INT;
    DECLARE num2 INT;
    DECLARE result DECIMAL(10,2);
    SET num1 = 100;
    SET num2 = 0;
    IF num2 = 0 THEN
	SELECT 'Cannot divide by zero' AS Message;
    ELSE
	SET result = num1 / num2;
	SELECT result AS Result;
    END IF;
END //
DELIMITER ;
CALL divide_numbers();