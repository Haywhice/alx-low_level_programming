/**
 * create_array - Creates an array
 * and populates it
 * @size - size of the array
 * @c - element of the array
 *
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c);
{
        char *ptr;
        unsigned int i;

        if (size == 0)
        {
                return (NULL);
        }
        ptr = malloc(sizeof (char) * size);

        if (ptr == NULL)
                return (NULL);

        for (i <= size; i++)
        {
                ptr(i) = c;
        }
        return (str);
}

