﻿# LSEG_Project

Flower Exchange Story!

The flower exchange is a system which supports basic trading. 

Trader Application - Traders can submit buy or sell orders for flowers via the Trader Application. 

Exchange Application - will process the incoming order against existing orders in the order container(known as Order Book) and do a full or partial execution.

Every order is replied with an Execution Report by the Exchange Application indicating the status of the order. 

Orders sometimes could be rejected due to quantity limitations, invalid flower type, etc. 

Flower Exchange – Input validations

An order will be rejected if
It does not contain a required field
It is for an invalid Instrument
It contains an invalid side
Its price is not greater than 0
Its quantity is not a multiple of 10
Its quantity is outside the range (min = 10 max = 1000)

A Rejected execution report is generated when validations are failed


