ACCOUNT
 
create table Account(Account_Holder_id int,Account_no number,Account_holder_name varchar(50),City varchar(40),Contact number,Date_of_Acc_Created DATE,Account_status varchar(40),Account_Type varchar(50),Balance number,PRIMARY KEY (Account_no));
insert into Account values(1000,2001203012342,'Ankit S.','Pune',1234567890,'1999-12-12','Active','Saving',50000);
insert into Account values(1001,9081203017654,'Ankita P.','Navsari',9876054321,'2021-10-19','Active','Saving',750000);
insert into Account values(1011,3012030187621,'Om M.','Navsari',7896543210,'2020-08-11','Terminate','Current',1000);
insert into Account values(1201,2000130187621,'Alok M.','Bijapur',3298743210,'2014-02-02','Active','Current',200000);
insert into Account values(1021,1230130187651,'Zack J.','Surat',2228747654,'2019-04-13','Terminate','NRI ',500);
insert into Account values(1010,3333130187000,'Sunil S.','Ahmedabad',4545477654,'2020-12-16','Active','Saving',50000);
insert into Account values(1100,1212121212121,'Raju K.','Pune',1212121212,'2014-1-3','Terminate','NRI',20000);



LOAN

create table Loan(Loan_no int,Branch_id varchar(22),Account_Holder_id int NOT NULL,Loan_Amount number,Loan_type varchar(40),PRIMARY KEY (Account_Holder_id));
insert into Loan values(10,'BARB00112',1000,100000,'Personal Loan');
insert into Loan values(11,'BARB0078672',1001,500000,'Student Loan');
insert into Loan values(15,'SBIN043262',1010,NULL,NULL);
insert into Loan values(21,'YESN098762',1011,200000,'Bike Loan');
insert into Loan values(25,'YESN043214',1021,NULL,NULL);
insert into Loan values(30,'SBIN099214',1100,NULL,NULL);
insert into Loan values(31,'ICIC003214',1201,100000,'Personal Loan');

BANK

create table Bank(Branch_id varchar(22),Branch_name varchar(22),Branch_city varchar(22));
insert into Bank values('BARB00112','vijalpore','Navsari');
insert into Bank values('BARB0078672','Limda','Waghodiya');
insert into Bank values('SBIN043262','Chhapra Road','Navsari');
insert into Bank values('YESN098762','Tikota','Bijapur');
insert into Bank values('YESN043214','Banaswadi','Banaswadi');
insert into Bank values('SBIN099214','Panaji','Panaji');
insert into Bank values('ICIC003214','Pune','Pune');



1)  Consider an example where there’s an account holder table where we are 
    doing an intra bank transfer i.e. a person holding account A is trying to 
    transfer $100 to account B

ANS)

BEGIN;
UPDATE Account SET Balance=Balance-100 WHERE Account_Holder_id=1001; --statement2
UPDATE Account SET Balance=Balance+100 WHERE Account_Holder_id=1000; --statement3
COMMIT; --statement4

2)	Also fetch the details of the account holder who are related from the same 
      city

ANS)
SELECT Account_Holder_id FROM Account 
   WHERE City IN (SELECT City FROM Account GROUP BY CITY HAVING COUNT(*) > 1)


3)Write a query to fetch account number and account holder name, whose 
	accounts were created after 15th of any month
ANS)
	


4) Write a query to display the city name and count the branches in that city. 
   Give the count of branches an alias name of Count_Branch.

Ans)

select Branch_city,count(*) as Count_Branch from Bank group by Branch_city;

5)  Write a query to display the account holder’s id, account holder’s name, 
    branch id, and loan amount for people who have taken loans. (NOTE : use 
    sql join concept to solve the query)

ANS) select l.Account_Holder_id,l.Branch_id,l.Loan_Amount,c.Account_holder_name from Loan l,Account c where c.Account_Holder_id=l.Account_Holder_id and not l.Loan_Amount IS NULL;

with join operation =====>

  SELECT
  c.Account_holder_name,
  l.Loan_Amount,
  c.Account_Holder_id,
  t.Branch_id
  FROM Account c
LEFT JOIN Loan l ON l.Account_Holder_id = c.Account_Holder_id
LEFT JOIN Bank t ON t.Branch_id = l.Branch_id
WHERE NOT l.Loan_Amount IS NULL



