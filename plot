set output "sort.ps"
set terminal postscript color "landscape"
set title "percentage de faux possitif selon k "

plot \
"sort.dat" using 1:2 title "% faux possitif" with lines linetype 1, \