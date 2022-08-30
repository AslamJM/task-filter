#!/bin/bash

cat words.txt | sed "s/\.//" | sed "s/\,//" | sed "s/\?//" | uniq | shuf >>Outfile.txt
