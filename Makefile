
clean:
	rm -rf *.log *.aux *.gz *.pyg *.upa *.upb
	rm -rf src/*.out src/*.exe

allclean: clean
	rm -rf *.pdf
