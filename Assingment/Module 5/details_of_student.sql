-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 01, 2023 at 12:48 PM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `details of student`
--

-- --------------------------------------------------------

--
-- Table structure for table `table-s`
--

CREATE TABLE `table-s` (
  `first name` varchar(200) DEFAULT NULL,
  `last name` varchar(60) DEFAULT NULL,
  `address` varchar(30) DEFAULT NULL,
  `city` varchar(90) DEFAULT NULL,
  `age` int(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `table-s`
--

INSERT INTO `table-s` (`first name`, `last name`, `address`, `city`, `age`) VALUES
('mickey', 'mouse', '123 fantasy way', 'anaheim', 73),
('Bat', 'Man', '321 Cavem Ave', 'Gothem', 54),
('Wonder', 'Women', '987 Truth Way', 'Paradise', 39),
('Donald', 'Duck', '555 Quack Street', 'Mallard', 65),
('Bugs', 'Bunny', '567 Carrot Street', 'Rascal', 58),
('Wiley', 'Coyote', '999 Acme Way', 'Canyon', 61),
('Cat', 'Woman', '234 Purfect Street', 'Hairball', 32),
('Tweety', 'Bird', '543', 'Itotltaw', 28);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
