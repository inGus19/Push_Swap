void	big_sort(t_stack *a, t_stack *b)
{
	int		*tab;
	int		median;
	int		chunk_size;

	// Convertir la pile en tableau
	tab = malloc(a->size * sizeof(int));
	if (!tab)
		return ;
	stack_to_tab(a, tab);
	sort_tab(tab, a->size); // Trier le tableau

	// Diviser la pile en segments (chunks)
	chunk_size = a->size / 5; // Exemple : 5 segments
	for (int i = 0; i < 5; i++) // Gérer les chunks
	{
		int pivot = tab[(i + 1) * chunk_size - 1];
		push_chunk(a, b, pivot);
	}

	// Ramener les éléments de b à a triés
	while (b->size > 0)
		push_back_to_a(a, b);

	free(tab);
}
