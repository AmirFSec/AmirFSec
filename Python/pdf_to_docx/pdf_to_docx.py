from pdf2docx import Converter
import sys
import os

def Usage():
    print ("Usage: pdf_to_docx.py <file.pdf>\n")
    exit()
    

def main():   

    if (len(sys.argv) <= 1):
        Usage()
    
    pdf_file = sys.argv[1]

    # Simple check to see if provided file exists
    if not os.path.exists(pdf_file):
        print("File does not exist. Exiting program.")
        exit()

    # check if extension is .pdf. Convert filename first to lower case 
    pdf_file = pdf_file.lower()

    #Check if extension is .pdf 
    if (pdf_file[-4:] != ".pdf"):
        print("Please ensure this is a pdf.. If so, rename extension of file to lowercase .pdf\n")
    else:
        docx_file = pdf_file.replace(".pdf", ".docx")
        print(docx_file)
        cv = Converter(pdf_file)
        cv.convert(docx_file)
        cv.close()

if __name__ == "__main__":
    main()


