
clean:
	rm -rf *.log *.aux *.gz *.pyg *.upa *.upb *.out
	rm -rf src/*.out src/*.exe

allclean: clean
	rm -rf *.pdf
