fn main() {
    let s = String::from("allocate memory"); // allocate memory in heap
    print_string(&s); // borrowing s
    // do not need to explicetly dellocate mem. Rust's ownership handles it
}

fn print_string(s: &String) {
    println!("{}", s);
}