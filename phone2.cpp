/*
Question 2 :
You have been asked to program a bot for a popular bank that will automate the management of incoming requests. There are three type of requests the bank can receive.

    transer i j sum : request to transfer sum amount of money from the ith account to the jth one (i and j are 1-based index).

    deposit i sum : request to deposit sum amount of money in the ith account (1-based index).

    withdraw i sum : request to withdraw sum amount of money from the ith account (1-based index).

You should also be able to process invalid requests. There are two types of invalid requests.

    invalid account number in the requests.
    withdrawal /transfer of a larger amount of money than is currently available.

Example 1 :

    input
    balance  =  [10,100,20,50,30]
    request = ["withdraw 2 10", "transfer 5 1 20",  "deposit 5 20",  "transfer 3 4 15"]

    output
    [30,90,5,65,30]

Example 2 :

    Input
    balance = [20,1000,500,40,90]
    requests = ["deposit 3 400", "transfer 1 2 30", "withdraw 4 50"]

    output
    [-2]
*/