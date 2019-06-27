#!/usr/bin/python3
# this is the base model
class BaseModel:
    import datetime
    import uuid
    """ some class """
    id = str(uuid.uuid4())
    created_at = datetime.datetime.now()
    updated_at = datetime.datetime.now()

    def __str__(self):
        print("[{}] ({}) <{}>".format(self.__name__, self.id, self.__dict__)

    def save(self):
        

    def to_dict(self):
              
