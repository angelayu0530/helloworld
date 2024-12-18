node<T> new_node_ptr = new Node<T>(new_item)
if(back_ == new_node_ptr){
    back_ = new_node_ptr;
    front_ = new_node_ptr;
}
else{
    back_->setNext(new_node_ptr)
    back = new_node_ptr
}
new_node_ptr;
return true;
}