for f in *.md
	do
		pandoc $f -o pdf/$f.pdf
	done
