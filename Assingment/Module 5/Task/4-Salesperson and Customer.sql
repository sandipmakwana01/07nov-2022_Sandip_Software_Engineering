-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 01, 2023 at 12:50 PM
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
-- Database: `salesperson and customer details`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `(PK)CNM.` varchar(90) DEFAULT NULL,
  `CNAME` varchar(90) DEFAULT NULL,
  `CITY` varchar(90) DEFAULT NULL,
  `RATING` varchar(90) DEFAULT NULL,
  `(FK)SNo` varchar(90) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`(PK)CNM.`, `CNAME`, `CITY`, `RATING`, `(FK)SNo`) VALUES
('201', 'hoffman', 'london', '100', '1001'),
('202', 'giovanne', 'roe', '200', '1003'),
('203', 'liu', 'san jose', '300', '1002'),
('204', 'grass', 'barcelona', '100', '1002'),
('206', 'clemens', 'london', '300', '1007'),
('207', 'pereira', 'roe', '100', '1004');

-- --------------------------------------------------------

--
-- Table structure for table `salseperson`
--

CREATE TABLE `salseperson` (
  `PK(SNo)` varchar(95) DEFAULT NULL,
  `SNAME` varchar(95) DEFAULT NULL,
  `CITY` varchar(90) DEFAULT NULL,
  `COMM` varchar(90) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salseperson`
--

INSERT INTO `salseperson` (`PK(SNo)`, `SNAME`, `CITY`, `COMM`) VALUES
('1001', 'peel', 'london', '.12'),
('1002', 'serres', 'san jose', '.13'),
('1004', 'motika', 'london', '.11'),
('1007', 'rafkin', 'barcelona', '.15'),
('1003', 'axelrod', 'new york', '.1');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
