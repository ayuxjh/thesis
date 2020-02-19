```python
int hash_function(unsigned int rowID, unsigned int seed)
{
    rowID ^= seed;
    rowId= (rowId+ 0x7ed55d16) + (rowId<< 12);
    rowId= (rowId^ 0xc761c23c) + (rowId>> 19);
    rowId= (rowId+ 0x165667b1) + (rowId<< 5);
    rowId= (rowId^ 0xd3a2646c) + (rowId<< 9);
    rowId= (rowId+ 0xfd7046c5) + (rowId<< 3);
    rowId= (rowId^ 0xb55a4f09) + (rowId>> 16);

    return rowId;
}