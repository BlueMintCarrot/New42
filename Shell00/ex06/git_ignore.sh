#!bin/bash

git status --ignored --short | grep '^!!' | sed 's/^!! //'
