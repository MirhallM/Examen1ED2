struct File_Entry {
	char name[30];
	int size;
	char type;
	int padre;
	int PrimerHijo;
	int HermanoDerecho;
	int PrimerBloq;
	bool libre;
};

File_Entry find_entry(char* root_directory, char* filename) {

	
	File_Entry actual = root_directory->PrimerHijo;
	
	do {
		if(strcmp(actual->name, root_directory) == 0)
			return actual;
		else {
			return find_entry_rec(actual->PrimerHijo, filename);
		}
		if(actual == NULL) actual = root_directory-HermanoDerecho;
		else return actual;
	}while(root_directory->HermanoDerecho != NULL);
	
	Return NULL;
}

File_Entry find_entry_rec(char* root_directory, char* filename) {
	if(root_directory = NULL)
		return NULL;
		
	if(strcmp(root_directory->name, filename) == 0)
		return root_directory;
		
	File_Entry temp = find_entry_rec(root_directory->PrimeroHijo, filename);
	if(temp != NULL)
		return temp;
	else
		return NULL;
}