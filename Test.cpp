unique_ptr<int> GiveMeItForASec(unique_ptr<int> p) {
   ++(*p);
   return p;
}
 
void foo() {
   auto ptr = make_unique<int>(99);
   //BLAD KOMPILACJI: auto new_ptr = GiveMeItForASec(ptr);
   //OK
   auto new_ptr = GiveMeItForASec(move(ptr));
   //TERAZ ptr nie zawiera nic
}
