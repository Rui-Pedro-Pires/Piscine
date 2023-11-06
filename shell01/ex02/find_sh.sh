#!/bin/sh
find -name "*.sh" | rev | cut -d '/' -f1 | rev | sed 's/\.sh//'
