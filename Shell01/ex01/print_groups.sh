#!/bin/sh
id -n -G | tr ' ' ',' | tr -d '\n'
