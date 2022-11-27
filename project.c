CREATE DATABASE goodData;
USE goodData
go
Create Table Data_Table
(
ID int not null primary key identity(1,1), 
name varchar(15) not null,
address varchar(20) not null,
contact varchar(15) not null,
);
Alter table Data_Table add college nvarchar(30) NULL
Insert into Data_Table
(name,address,contact,college)
Values
('Parpti','Baneshwor','9851984123','Gurukul CA')
Delete from Data_Table where name='Rohan';
Select * from Data_Table where name='Rohan';
Select name,address from Data_Table;
Select * from Data_Table
Update Data_Table
Set name='Prapti RL Rana'
where id='7';
